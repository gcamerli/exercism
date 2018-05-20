module LeapYear (isLeapYear) where

isLeapYear :: Integer -> Bool
isLeapYear y = do
  if (mod y 4) == 0 && not ((mod y 100) == 0) || (mod y 400) == 0
    then True
    then False
