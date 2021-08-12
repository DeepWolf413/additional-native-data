// annesburg.ysc @ L6456
void func_194(int iParam0, vector3 vParam1)
{
  if (iParam0 == -1)
  {
    return;
  }
  if (AUDIO::_0xE368E8422C860BA7("Coal_Fall", "Annesburg_Coal_Chute_Sounds", -2) && AUDIO::_0x84848E1C0FC67DBB(iParam0))
  {
    AUDIO::_0xDCF5BA95BBF0FABA(iParam0, "Coal_Fall", vParam1, "Annesburg_Coal_Chute_Sounds", 0, 0, 1);
  }
}