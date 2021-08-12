// camp_beaverhollow.ysc @ L22751
int func_773(int iParam0)
{
  int iVar0;

  if (!STREAMING::IS_MODEL_VALID(iParam0))
  {
    iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
  }
  iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
  return iVar0;
}