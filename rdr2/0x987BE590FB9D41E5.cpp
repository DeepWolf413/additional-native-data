// trainrobbery_ambient.ysc @ L6257
void func_239(int iParam0)
{
  if (VOLUME::_DOES_VOLUME_EXIST(Local_718.f_1[iParam0 /*22*/].f_1) && FIRE::_IS_EXPLOSION_IN_VOLUME(-1, Local_718.f_1[iParam0 /*22*/].f_1))
  {
    LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_VANDALISM_VEHICLE"), 0, 0, -1);
    LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_VEHICLE_DESTRUCTION"), 0, 0, -1);
    func_174(1);
    LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
    if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
    {
      if (func_175())
      {
        LAW::_0x75CBF20BA47E4F89(Global_36, 0);
      }
      else
      {
        LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_CUSTOM_TRAIN_ROBBERY"));
      }
    }
    LAW::_0x987BE590FB9D41E5(1);
    LAW::_0xDCF12B89624AAC96(1);
  }
}