// fanatic1.ysc @ L38410
void func_325()
{
  if (func_313(iLocal_649))
  {
    switch (iLocal_654)
    {
      case 0:
        if (func_326())
        {
          if (!func_440(iLocal_649))
          {
            iLocal_649 = PED::CREATE_PED(26, joaat("a_c_rottweiler"), Local_650, fLocal_653, true, true);
            PED::SET_PED_CAN_RAGDOLL(iLocal_649, true);
          }
          STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
          func_39("Loaded and created dog - progressing");
          iLocal_654 = 1;
        }
        break;
      
      case 1:
        if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
        {
          if (iLocal_658 == 109)
          {
            TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_649, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 2.5f, -1, 0.2f, true);
            iLocal_654 = 2;
          }
        }
        break;
      }
  }
}