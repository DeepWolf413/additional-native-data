// beat_town_robbery.ysc @ L17941
void func_512()
{
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1475))
  {
    iLocal_1475 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 1f, 0.7f, 3f);
    PED::_0x7C00CFC48A782DC0(iLocal_1475, Global_35, 0f, -0.25f, 0f, 0f, 0f, 0f, 2, 1);
    PED::_0x19C975B81BE53C28(iLocal_1475, Global_35);
    PATHFIND::_0x19C7567D2F2287D6(iLocal_1475, 7);
  }
}