// beat_torturing_captive.ysc @ L9201
void func_241()
{
  int iVar0;
  int iVar1;
  vector3 vVar2;

  TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_94, &iVar0);
  GRAPHICS::_0x41F88A85A579A61D(0.5f);
  iVar1 = 0;
  while (iVar1 <= iVar0)
  {
    TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_94, iVar1, &vVar2);
    GRAPHICS::_0xDD9DC1AB63D513CE(vVar2);
    iVar1++;
  }
  GRAPHICS::_0x812C1563185C6FB2();
}