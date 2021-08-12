// gang2.ysc @ L57067
void func_1417(char[4] cParam0, float fParam1, int iParam2)
{
  if ((func_1287(cParam0, fParam1) || iParam2 == 0) && !bLocal_111)
  {
    if (!bLocal_108)
    {
      AUDIO::_0x821C32C728B24477(1, 1f, 10000);
      AUDIO::_0xF64034D533CE8AAC(1, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
      bLocal_108 = true;
    }
  }
  else if (bLocal_108)
  {
    AUDIO::_0x821C32C728B24477(0, 0f, 10000);
    AUDIO::_0xF64034D533CE8AAC(0, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
    bLocal_108 = false;
  }
}