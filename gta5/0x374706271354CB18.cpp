// gb_delivery.ysc @ L150593
void func_1610(bool bParam0, var uParam1, var uParam2)
{
  float fVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  if (bParam0)
  {
    ENTITY::SET_ENTITY_HEADING(*uParam2, ENTITY::GET_ENTITY_HEADING(*uParam1));
    fVar0 = ENTITY::GET_ENTITY_HEADING(*uParam1);
    Var1 = { func_1482(fVar0) };
    Var4 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) - Vector(3.5f, 0f, 0f) + Var1 * Vector(1.6f, 1.6f, 1.6f) };
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam2, Var4, false, false, true);
    VEHICLE::_ATTACH_ENTITY_TO_CARGOBOB(*uParam1, *uParam2, -1, 0f, 0f, 0f);
    VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(*uParam1, *uParam2, 0.1f);
  }
  else
  {
    VEHICLE::_DETACH_ENTITY_FROM_CARGOBOB(*uParam1, *uParam2);
    ENTITY::DETACH_ENTITY(*uParam2, true, true);
  }
}