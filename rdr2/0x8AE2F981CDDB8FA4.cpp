// braithwaites2.ysc @ L70852
void func_1824(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_8[iParam0]))
  {
    EVENT::SET_DECISION_MAKER(Local_14.f_8[iParam0], joaat("EMPTY"));
    PED::SET_PED_TARGET_LOSS_RESPONSE(Local_14.f_8[iParam0], 2);
  }
}