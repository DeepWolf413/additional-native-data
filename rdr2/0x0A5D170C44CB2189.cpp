// ambush_odr_bridge_trap.ysc @ L5297
void func_178()
{
  if (func_61(Local_16[2], 0, 1))
  {
    if (func_61(Local_16.f_56, 0, 1))
    {
      PED::SET_PED_CONFIG_FLAG(Local_16.f_56, 277, true);
    }
    ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_16[2], true, 15f);
  }
}