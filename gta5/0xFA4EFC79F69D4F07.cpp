// agency_heist1.ysc @ L30819
int func_174()
{
  if (func_210(&iLocal_1008, 1, 705.4539f, -965.5662f, 29.3953f, 273.3178f, 1, 0, 0))
  {
    func_175(iLocal_1008, 12, 39, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
    TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_1008, "PROP_HUMAN_SEAT_CHAIR", 704.8563f, -965.3852f, 29.8245f, 269.2285f, 0, false, true);
    return 1;
  }
  return 0;
}