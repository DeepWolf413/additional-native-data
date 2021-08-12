// epsilon4.ysc @ L35808
void func_254()
{
  if (func_231(iLocal_641))
  {
    if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
    {
      if (iLocal_353 < 2)
      {
        func_402("*** Detector exit");
        WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_641, PLAYER::PLAYER_PED_ID());
        func_5(&iLocal_641);
        if (!ENTITY::DOES_ENTITY_EXIST(Local_625))
        {
          func_402("*** Recreating gDetector.hObj after cutscene...");
          Local_625 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
        }
      }
      else
      {
        func_402("*** Detector exit (end cutscene)");
        func_5(&iLocal_641);
      }
    }
  }
}