SELECT AVG(energy) FROM songs
WHERE artist_id = (SELECT id FROM artist WHERE name = 'Drake');