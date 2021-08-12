// doc_book.ysc @ L373
int func_6(var uParam0, var uParam1)
{
  int iVar0;

  Global_1935496.f_59.f_4 = MISC::GET_GAME_TIMER() + 5000;
  if (Global_36621 == 1)
  {
    iVar0 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
    if (iVar0 == func_46(Global_1911772))
    {
      Global_36621 = 2;
    }
  }
  switch (*uParam0)
  {
    case 9:
      func_1(uParam0, uParam1);
      break;
  }
  return 0;
}