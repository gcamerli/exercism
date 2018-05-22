module Bob (responseFor) where

import Data.Char (isAlpha, isSpace, isUpper)

data Select = A1 | A2 | A3 | A4 | A5 deriving (Eq)

responseFor :: String -> String
responseFor s | all isSpace s = say A4
              | shout && ask  = say A3
              | ask           = say A1
              | shout         = say A2
              | otherwise     = say A5
              where
                say a | a == A1 = "Sure."
                      | a == A2 = "Whoa, chill out!"
                      | a == A3 = "Calm down, I know what I'm doing!"
                      | a == A4 = "Fine. Be that way!"
                      | a == A5 = "Whatever."
                ask   = last (filter (not . isSpace) s) == '?'
                shout = any isAlpha s && all isUpper (filter isAlpha s)
