// pause_menu.ysc @ L7633
int func_255(int iParam0)
{
  int iVar0;

  if (!STREAMING::IS_MODEL_VALID(iParam0))
  {
    return 0;
  }
  iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_430());
  return iVar0;
}