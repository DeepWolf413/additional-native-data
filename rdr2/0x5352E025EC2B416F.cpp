// player_camp.ysc @ L5419
void func_134(bool bParam0, bool bParam1)
{
  vector3 vVar0;
  vector3 vVar3;

  if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
  {
    vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
    vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vVar0) };
    if (!bParam0)
    {
      if (vVar3.x > 0f)
      {
        func_323(90f, 0);
      }
      else
      {
        func_323(-90f, 0);
      }
    }
    else
    {
      func_323(0, 0);
    }
    if (bParam1)
    {
      func_323(25f, 0);
    }
  }
}