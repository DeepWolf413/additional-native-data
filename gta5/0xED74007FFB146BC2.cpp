// agency_heist3a.ysc @ L120691
void func_826()
{
  PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_5084[0], false);
  PED::REMOVE_PED_FROM_GROUP(iLocal_5084[0]);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_5084[0], false);
  PED::SET_PED_NEVER_LEAVES_GROUP(Local_1019[0 /*32*/], false);
  PED::REMOVE_PED_FROM_GROUP(Local_1019[0 /*32*/]);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1019[0 /*32*/], false);
  if (ENTITY::DOES_ENTITY_EXIST(Local_1019[1 /*32*/]))
  {
    PED::SET_PED_NEVER_LEAVES_GROUP(Local_1019[1 /*32*/], false);
    PED::REMOVE_PED_FROM_GROUP(Local_1019[1 /*32*/]);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1019[1 /*32*/], false);
  }
}