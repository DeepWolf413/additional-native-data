// marston7.ysc @ L68483
void func_1802()
{
  if (iLocal_1675 == 1)
  {
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_110, func_375(3, 9), 3f, false, false, 0);
    PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_110, true);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_215);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1988.077f, -1419.067f, 115.6125f, 2f, -1, 3f, 4202497, 40000f);
    TASK::TASK_SEEK_COVER_TO_COORDS(0, func_375(3, 9), vLocal_1644, -1, 1, 0, 0);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_215);
    TASK::TASK_PERFORM_SEQUENCE(iLocal_110, iLocal_215);
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_215);
    iLocal_1675 = 2;
  }
  else
  {
    func_1255(1);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_215);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1988.077f, -1419.067f, 115.6125f, 2f, -1, 3f, 4202497, 40000f);
    TASK::TASK_SEEK_COVER_TO_COORDS(0, func_375(3, 8), vLocal_1640, -1, 1, 0, 0);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_215);
    TASK::TASK_PERFORM_SEQUENCE(iLocal_110, iLocal_215);
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_215);
    iLocal_1675 = 1;
  }
  iLocal_1672 = 1;
}