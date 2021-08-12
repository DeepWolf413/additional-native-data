// abigail2_1.ysc @ L34456
void func_775(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(Local_38[iParam0 /*8*/].f_7))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_38[iParam0 /*8*/].f_7, true);
    if (!ENTITY::IS_ENTITY_DEAD(Local_38[iParam0 /*8*/]))
    {
      PED::_0x931B241409216C1F(Local_38[iParam0 /*8*/], Local_38[iParam0 /*8*/].f_7, 0);
    }
    AITRANSPORT::_0xBA8818212633500A(Local_38[iParam0 /*8*/].f_7, 0, 1);
  }
}