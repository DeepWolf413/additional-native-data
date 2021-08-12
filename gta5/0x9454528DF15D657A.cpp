// fanatic3.ysc @ L39422
void func_348()
{
  if (func_276())
  {
    func_274();
    func_286(&uLocal_404, "FAN3AUD", "FAN3_SCARED", 9, 1, 0);
  }
  else
  {
    func_244(&uLocal_404, "FAN3AUD", "FAN3_SCARED", 9, 1, 0, 0);
  }
  func_10(&iLocal_297);
  PED::SET_PED_KEEP_TASK(iLocal_307, true);
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_307, false))
  {
    TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_307, PED::GET_VEHICLE_PED_IS_IN(iLocal_307, false), PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 100f, 0.1f, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_307, 2, true);
    func_9("Setting Mary Ann Use Vehicle flee attribute");
  }
  else
  {
    TASK::TASK_SMART_FLEE_PED(iLocal_307, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
  }
  if (func_524(iLocal_176))
  {
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_176, 130, true);
    PED::SET_PED_KEEP_TASK(iLocal_307, true);
    TASK::TASK_SMART_FLEE_PED(iLocal_307, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
  }
  func_278(7);
}