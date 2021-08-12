// grays2.ysc @ L60273
void func_1514()
{
  int iVar0;
  int iVar1;

  iVar0 = PED::_GET_LAST_MOUNT(Global_35);
  iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
  if (func_175(iVar0, 0))
  {
    if (func_1231(iVar0, 1849.94f, -1356.95f, 41.1f, 0) < 8f)
    {
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 1847.44f, -1356.03f, 41.11f, 51.91f, true, false, true);
    }
  }
  if (!ENTITY::IS_ENTITY_DEAD(iVar1))
  {
    if (func_1231(iVar1, 1849.94f, -1356.95f, 41.1f, 0) < 8f)
    {
      ENTITY::SET_ENTITY_COORDS(iVar1, 1840.01f, -1351.94f, 42.46f, true, false, true, true);
    }
  }
}