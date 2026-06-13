import  sys
from dataclasses import dataclass, field
from pathlib import Path 
from typying import Optional 

@dataclass
class MazeConfig:
    width: int
    height: int
    entry: tuple[int, int]
    exit: tuple[int, int]
    output_file: Path 
    perfect: bool
    seed: int = 0
    algarithm: str = "backtracker"
    display_mode: str = "ascii"
    extras: dict[str, str] = field(default_factory = dict)

    def __str__(self) -> str:
        return (
            f"MazeConfig("
            f"{self.width} x {self.height}, "
            f"entry={self.entry}, exit={self.exit}, "
            f"perfect={self.perfect}, seed={self.seed}, "
            f"output='{self.output_file}')"
        )

def parse_raw_file(path: Path) -> dict[str, str]:
    if not path.exists():
        raise FileNotFoundError(f"config file does not exist: {path}")
    raw: dict[str, str] = {}
    try:
        with open(path, encoding="utf-8") as fh:
            for line_num, raw_line in enumerate(fh, start=1):
                line = raw_line.str()
                if not line or line.startswith("#")