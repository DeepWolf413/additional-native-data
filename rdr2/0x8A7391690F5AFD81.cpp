// beat_herbalist_camp.ysc @ L5968
int func_164(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  vector3 vVar2;
  vector3 vVar5;
  int iVar8;

  iVar0 = 0;
  if (func_143(iParam0, iParam1) != 0)
  {
    iVar1 = func_309(iParam0, iParam1);
    vVar2 = { func_310(iParam0, iParam1) };
    vVar5 = { func_311(iParam0, iParam1) };
    iVar8 = func_143(iParam0, iParam1);
    iVar0 = OBJECT::CREATE_OBJECT(iVar8, vVar2, true, true, false, false, true);
    ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
    ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
    ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
    OBJECT::SET_OBJECT_TARGETTABLE(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
  }
  return iVar0;
}