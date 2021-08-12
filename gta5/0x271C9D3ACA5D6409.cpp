// mission_triggerer_a.ysc @ L4129
void func_52(int* iParam0)
{
  if (PHYSICS::DOES_ROPE_EXIST(iParam0))
  {
    if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(*iParam0))
    {
      PHYSICS::DELETE_ROPE(iParam0);
    }
  }
}