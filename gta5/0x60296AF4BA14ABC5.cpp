// arena_carmod.ysc @ L194531
void func_1708(char* sParam0)
{
  if (!func_249(sParam0))
  {
    if (func_1711())
    {
      HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
      func_1710(sParam0);
      func_1709();
      Global_99422.f_5 = 1;
      Global_99422.f_6 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
    }
  }
}