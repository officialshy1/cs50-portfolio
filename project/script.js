let isGameRunning = false;
let startTime;
let endTime;

function getRandomPosition() {
  const container = document.querySelector('.game-container');
  const target = document.getElementById('target');
  const containerWidth = container.clientWidth;
  const containerHeight = container.clientHeight;
  const targetWidth = target.clientWidth;
  const targetHeight = target.clientHeight;

  const randomX = Math.random() * (containerWidth - targetWidth);
  const randomY = Math.random() * (containerHeight - targetHeight);

  return {
    x: randomX,
    y: randomY,
  };
}

function startGame() {
  isGameRunning = true;
  document.getElementById('result').textContent = '';
  moveTarget();
}

function moveTarget() {
  if (isGameRunning) {
    const target = document.getElementById('target');
    const position = getRandomPosition();
    target.style.left = `${position.x}px`;
    target.style.top = `${position.y}px`;
    target.addEventListener('click', handleTargetClick);
    startTime = new Date().getTime();
  }
}

function handleTargetClick() {
  if (isGameRunning) {
    const target = document.getElementById('target');
    target.removeEventListener('click', handleTargetClick);
    endTime = new Date().getTime();
    const reactionTime = endTime - startTime;
    document.getElementById('result').textContent = `Your reaction time: ${reactionTime}ms`;
    setTimeout(moveTarget, 1000);
  }
}