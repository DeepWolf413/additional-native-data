// rcm_beau_and_penelope21.ysc @ L24806
bool func_798()
{
  if (!ENTITY::IS_ENTITY_DEAD(Local_58[0 /*20*/]))
  {
    if ((func_671(Local_58[0 /*20*/], joaat("SCRIPT_TASK_GRAPPLE")) || func_671(Local_58[0 /*20*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"))) && PED::_0x753B15AD0FD6F3E3(Local_58[0 /*20*/]) != 0)
    {
      return true;
    }
  }
  return false;
}