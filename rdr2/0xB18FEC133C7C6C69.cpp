// pre_sean1_law.ysc @ L838
bool func_24(int iParam0, char* sParam1)
{
  struct<7> Var0;
  int iVar8;

  if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
  {
    Var0.f_5 = 1;
    Var0.f_6 = 1;
    Var0 = sParam1;
    Var0.f_3 = -500314840;
    Var0.f_4 = Global_35;
    Var0.f_5 = 0;
    iVar8 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var0);
    if (iVar8 >= 0)
    {
      AUDIO::_0xB18FEC133C7C6C69(iVar8);
      return true;
    }
  }
  return false;
}