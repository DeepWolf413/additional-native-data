// crayfish_search.ysc @ L132
bool func_6(var uParam0, int iParam1)
{
  vector3 vVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
  {
    vVar0 = { func_13(uParam0) };
    if (!func_14(vVar0))
    {
      iParam1->f_6 = OBJECT::CREATE_OBJECT(func_11(), vVar0, true, true, false, false, true);
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
  {
    return false;
  }
  if (iParam1->f_1 != -1 && !func_15(iParam1, 1065353216 /* Float: 1f */))
  {
    return false;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
  {
    PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam1->f_7, 0);
    PLAYER::_0x6ECFC621A168424C(iParam1->f_7, iParam1->f_7, 0, 0);
  }
  return true;
}