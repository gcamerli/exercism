module Pangram (isPangram) where

import Data.Char (toLower)

isPangram :: String -> Bool
isPangram s = and [ t `elem` map toLower s | t <- ['a'..'z'] ]
