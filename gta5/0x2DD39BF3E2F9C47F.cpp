// act_cinema.ysc @ L115237
void func_1115(int iParam0)
{
  int iVar0;
  
  iVar0 = Global_2405077.f_2689;
  if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405077.f_2687 == 0) && iParam0 == 0)
  {
    iVar0 = 255;
  }
  if (!iVar0 == Global_2405077.f_2686)
  {
    if (!AUDIO::IS_RADIO_RETUNING())
    {
      Global_2405077.f_2686 = iVar0;
    }
  }
}