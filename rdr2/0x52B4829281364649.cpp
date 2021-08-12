// ambient_fishing_scenario.ysc @ L239
void func_14()
{
  if (Local_5 == 0)
  {
    return;
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5.f_1);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5.f_2);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_5.f_3);
  if (PHYSICS::DOES_ROPE_EXIST(Local_5.f_8))
  {
    PHYSICS::DELETE_ROPE(&(Local_5.f_8));
  }
  if (PHYSICS::DOES_ROPE_EXIST(Local_5.f_9))
  {
    PHYSICS::DELETE_ROPE(&(Local_5.f_9));
  }
  func_24(&(Local_5.f_5));
  func_24(&(Local_5.f_6));
  func_24(&(Local_5.f_7));
  func_21(0);
}