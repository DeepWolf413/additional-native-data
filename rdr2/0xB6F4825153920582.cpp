// beat_rat_infestation.ysc @ L2308
void func_53(bool bParam0)
{
  if (bParam0)
  {
    EVENT::_0xB6F4825153920582();
    LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
    PLAYER::_0x96722257E5381E00(PLAYER::PLAYER_ID());
    if (!func_15(iLocal_34, 64))
    {
      LAW::_0x710448D44A64C213(0);
      LAW::_0xC805EB785824F712(0);
      func_17(&iLocal_34, 64);
    }
  }
  else if (func_15(iLocal_34, 64))
  {
    LAW::_0x710448D44A64C213(1);
    LAW::_0xC805EB785824F712(1);
    func_125(&iLocal_34, 64);
  }
}