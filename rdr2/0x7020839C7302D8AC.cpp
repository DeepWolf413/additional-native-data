// hanging_carcass.ysc @ L544
bool func_19(var uParam0)
{
  bool bVar0;

  bVar0 = false;
  if (func_7(uParam0, 64))
  {
    bVar0 = true;
  }
  else if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
  {
    if ((ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) || PED::_0x7020839C7302D8AC(uParam0->f_42)) || (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46) && !PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
    {
      func_34(uParam0);
      bVar0 = true;
    }
  }
  if (bVar0)
  {
    PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
  }
  return bVar0;
}