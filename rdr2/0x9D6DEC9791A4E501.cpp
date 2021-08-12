// campfire_always.ysc @ L2984
void func_57(var uParam0)
{
  int iVar0;
  char* sVar1;

  if (uParam0->f_68 == 11)
  {
    iVar0 = 0;
    while (iVar0 <= (uParam0->f_103 - 1))
    {
      if (func_56(uParam0->f_16[iVar0], 0, 1) && PED::IS_PED_HUMAN(uParam0->f_16[iVar0]))
      {
        if (uParam0->f_415)
        {
          if (uParam0->f_162 > 0)
          {
            sVar1 = func_202(uParam0->f_162);
          }
          else
          {
            AUDIO::_0x9D6DEC9791A4E501(uParam0->f_16[iVar0], "PLAYER_INTERACT_CHAT_BOUNTY", 0, 1);
          }
        }
        if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
        {
          func_203(uParam0->f_16[iVar0], sVar1, 0);
        }
      }
      iVar0++;
    }
  }
}