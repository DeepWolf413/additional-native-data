// act_cinema.ysc @ L2506
void func_57(int iParam0, char* sParam1, int iParam2)
{
  char* sVar0;
  
  sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
  if (Global_22670.f_5026 >= 12)
  {
    StringCopy(&Global_4271135, sVar0, 64);
    StringCopy(&(Global_4271135.f_16), sParam1, 16);
    Global_4271135.f_20 = iParam2;
    return;
    return;
  }
  MISC::CLEAR_BIT(&(Global_22670.f_5309), Global_22670.f_5026);
  StringCopy(&(Global_22670.f_5028[Global_22670.f_5026 /*16*/]), sVar0, 64);
  StringCopy(&(Global_22670.f_5221[Global_22670.f_5026 /*4*/]), sParam1, 16);
  Global_22670.f_5270[Global_22670.f_5026] = iParam2;
  Global_22670.f_5283[Global_22670.f_5026] = iParam0;
  Global_22670.f_5296[Global_22670.f_5026] = 32;
  Global_22670.f_5026++;
}