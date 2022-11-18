#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
       for (int j = 0; j < width; j++)
        {
            int rgbt = round(image[row][col].rgbtRed + image[row][col].rgbtGreen + image[row][col].rgbtBlue / 3.0);
            image[row][col].rgbtRed = image[row][col].rgbtGreen = image[row][col].rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    int sRed, sGreen, sBlue;
    for  (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            sRed = round(0.393 * image[row][col].rgbtRed + 0.769 * image[row][col].rgbtGreen + 0.189 * image[row][col].rgbtBlue);
            sGreen = round(0.349 * image[row][col].rgbtRed + 0.686 * image[row][col].rgbtGreen + 0.168 * image[row][col].rgbtBlue);
            sBlue = round(0.272 * image[row][col].rgbtRed + 0.534 * image[row][col].rgbtGreen + 0.131 * image[row][col].rgbtBlue);
            image[row][col].rgbtRed = sRed > 255? 255: sRed;
            image[row][col].rgbtGreen = sRed > 255? 255: sGreen;
            image[row][col].rgbtBlue = sRed > 255? 255: sBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
