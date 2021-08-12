// ambush_exc_road_robbery.ysc @ L11172
void func_367()
{
  int iVar0;
  int iVar1;
  float fVar2;

  iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false);
  iVar1 = ENTITY::GET_ENTITY_HEALTH(Global_35);
  fVar2 = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0));
  if (fVar2 > 0.15f)
  {
    func_545(Global_35, 0.15f, 0);
  }
  else if (iVar1 > 1)
  {
    PED::APPLY_DAMAGE_TO_PED(Global_35, 1, 1, -1, 0);
  }
}