// abigail2_1.ysc @ L23643
void func_366(struct<16> Param0, int iParam16)
{
  int iVar0;

  if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
  {
    return;
  }
  if (Global_1934603.f_161 >= 10)
  {
    return;
  }
  if (!func_728(iParam16, 2))
  {
    if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_729(&(Param0.f_10)))
    {
      return;
    }
  }
  iVar0 = 0;
  while (iVar0 <= 9)
  {
    if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
    {
      Global_1934603[iVar0 /*16*/] = { Param0 };
      Global_1934603.f_161++;
      func_730(iParam16);
      return;
    }
    iVar0++;
  }
}