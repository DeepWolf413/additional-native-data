// utopia1.ysc @ L57538
void func_1361()
{
  var uVar0;
  int iVar1;

  if (!bLocal_591)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(Local_14.f_24[0]) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_16[4])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_48[1]))
    {
      if (!func_166(Local_14.f_16[4], 0))
      {
        if (!VEHICLE::_0x404527BC03DA0E6C(Local_14.f_48[1]))
        {
          VEHICLE::BRING_VEHICLE_TO_HALT(Local_14.f_48[1], 2f, 1, false);
        }
        if (!func_166(Local_14.f_24[0], 0) || !PED::IS_PED_IN_VEHICLE(Local_14.f_24[0], Local_14.f_48[1], false))
        {
          if (VEHICLE::_0xA19447D83294E29F(Local_14.f_48[1], &uVar0, &iVar1))
          {
            if (iVar1 > 0 && ENTITY::GET_ENTITY_SPEED(Local_14.f_48[1]) < 1f)
            {
              VEHICLE::_0x7C06330BFDDA182E(Local_14.f_48[1]);
              TASK::_0x141BC64C8D7C5529(Local_14.f_48[1]);
              TASK::_0xEBA2081E0A5F4D17(Local_14.f_48[1]);
              TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(Local_14.f_48[1], -1798.67f, -342.1558f, 163.8509f, 8f, 69210112, 6, 10f, 10f);
              bLocal_591 = true;
            }
          }
        }
      }
    }
  }
}