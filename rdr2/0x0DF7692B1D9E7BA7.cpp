// dominoes_sp.ysc @ L24044
int func_739(var uParam0, var uParam1, int iParam2, int* iParam3, int iParam4)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar4;

  if (iParam2 == 29)
  {
    return 0;
  }
  iVar0 = func_552(iParam2, uParam0->f_6);
  vVar1 = { func_843(uParam0, uParam1) };
  vVar4 = { 0f, 0f, (uParam0->f_3 + IntToFloat(func_856(uParam1->f_3))) };
  if (ENTITY::DOES_ENTITY_EXIST(*iParam3) && ENTITY::GET_ENTITY_MODEL(*iParam3) != iVar0)
  {
    func_266(iParam3);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
  {
    *iParam3 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
  {
    ENTITY::SET_ENTITY_COORDS(*iParam3, vVar1, true, false, true, true);
    ENTITY::SET_ENTITY_ROTATION(*iParam3, vVar4, 2, true);
    ENTITY::SET_ENTITY_ALPHA(*iParam3, iParam4, false);
    CAM::_0xDB382FE20C2DA222(*iParam3);
    return 1;
  }
  return 0;
}