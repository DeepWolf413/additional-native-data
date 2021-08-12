// fm_capture_creator.ysc @ L164086
int func_1291(char* sParam0, int iParam1)
{
  int iVar0;
  
  if (iParam1 > 1)
  {
    iVar0 = 0;
    while (iVar0 <= (iParam1 - 2))
    {
      if (!MISC::ARE_STRINGS_EQUAL(HUD::_GET_TEXT_SUBSTRING_SAFE(sParam0, iVar0, iVar0 + 1, 1), " "))
      {
        return 0;
      }
      iVar0++;
    }
  }
  else if (iParam1 == 1)
  {
    return MISC::ARE_STRINGS_EQUAL(sParam0, " ");
  }
  return 1;
}