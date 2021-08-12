// fishing_core.ysc @ L13576
void func_531(var uParam0, char* sParam1)
{
  if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, sParam1))
  {
    uParam0->f_3 = sParam1;
    AUDIO::_0xAC84686C06184B0D(uParam0->f_3, uParam0->f_1);
  }
}