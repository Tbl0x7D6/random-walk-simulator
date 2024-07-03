# A simple random walk simulator

## Explanation

Initially the astronaut is located at $(D, 0, 0)$, and then starts a random walk.

In the first case the boundary is the plane $x=0$, in the other case it is a ball centered at origin with radius $R$.

## Run

```shell
make all
./main_plane      # plane case, result should be close to 100%
./main_sphere     # sphere case, result should be close to 75%
```
