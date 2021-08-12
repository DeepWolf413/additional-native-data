// ambush_bnd_ridge_ambush.ysc @ L3435
void func_136()
{
  if (!func_61(Local_15.f_56, 0, 0))
  {
    Local_15.f_56 = func_268(&Local_15, 0);
    if (func_61(Local_15.f_56, 0, 0))
    {
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, false, joaat("REL_GANG_ODRISCOLL"));
    }
  }
}