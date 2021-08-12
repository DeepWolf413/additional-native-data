// paparazzo1.ysc @ L40903
void func_358()
{
  if (!iLocal_3181)
  {
    if (func_68(Local_3515))
    {
      if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3515))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3515, false);
        if (ENTITY::GET_ENTITY_HEALTH(Local_3515) > 50)
        {
          ENTITY::SET_ENTITY_HEALTH(Local_3515, 50, 0);
        }
        PED::_0xEC4B4B3B9908052A(Local_3515, 30000f);
        iLocal_3181 = 1;
      }
    }
    else
    {
      iLocal_3181 = 1;
    }
  }
}