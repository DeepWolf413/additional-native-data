// shoprobberies.ysc @ L37476
void func_1358()
{
  var uVar0;
  int iVar3;
  float fVar4;

  if (!func_74(Global_35, Local_62.f_1290))
  {
    return;
  }
  MISC::_GET_PROJECTILE_NEAR_PED(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 10f, &uVar0, &iVar3, 0, 1);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
  {
    return;
  }
  fVar4 = 2f;
  WEAPON::_0x74C9080FDD1BB48F(iVar3, fVar4);
  WEAPON::_0x74C2365FDD1BB48F(iVar3, 1);
}