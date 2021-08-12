// act_bankrobbery01.ysc @ L36283
bool func_1054(var uParam0, int iParam1, int iParam2)
{
  vector3 vVar0;
  vector3 vVar3;
  int iVar6;

  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_487[iParam2]))
  {
    vVar0 = { func_1513(uParam0, iParam1, iParam2) };
    vVar3 = { func_1514(uParam0, iParam1, iParam2) };
    iVar6 = func_1075(iParam2);
    uParam0->f_487[iParam2] = OBJECT::CREATE_OBJECT(iVar6, vVar0, true, true, false, false, true);
    ENTITY::SET_ENTITY_ROTATION(uParam0->f_487[iParam2], vVar3, 2, true);
    func_571(uParam0->f_487[iParam2], 1);
    return false;
  }
  return true;
}