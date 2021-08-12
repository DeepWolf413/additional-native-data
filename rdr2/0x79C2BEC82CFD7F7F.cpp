// beat_savage_warning.ysc @ L1181
bool func_24()
{
  if (Local_3.f_194 == 0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[0]))
    {
      if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_236[0]) || !PHYSICS::_0x9B4F7E3E4F9C77B3(iLocal_236[0], iLocal_234[0]))
      {
        return true;
      }
    }
  }
  return false;
}