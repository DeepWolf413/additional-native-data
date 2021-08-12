// rcm_sadie11.ysc @ L13967
void func_393()
{
  if (!bLocal_45)
  {
    if ((func_119() != 98 && iLocal_1284 >= 2) && ((iLocal_1284 <= 8 && !func_221(4)) && !bLocal_58))
    {
      func_208(1);
      LAW::_0x4B52BF96E225D230(1);
      bLocal_45 = true;
    }
  }
  else
  {
    LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_HASSLE"), 0, 0, -1);
    LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_LOITERING"), 0, 0, -1);
    if ((iLocal_1284 > 7 && iLocal_1284 != 4) || func_119() == 98)
    {
      if ((func_221(4) || bLocal_58) || func_119() == 98)
      {
        func_208(0);
        bLocal_45 = false;
      }
    }
  }
}