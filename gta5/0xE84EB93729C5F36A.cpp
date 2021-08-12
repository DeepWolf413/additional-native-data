// am_mp_hacker_truck.ysc @ L329478
void func_5375()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_955[0]))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_955[0]))
    {
      if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_955[0]) != func_300(Local_701.f_7))
      {
        OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_955[0], func_300(Local_701.f_7));
      }
    }
  }
  else
  {
    iLocal_955[0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1421.976f, -3011.691f, -79.4f, 2f, joaat("ba_prop_battle_control_seat"), false, false, false);
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_955[1]))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_955[1]))
    {
      if (OBJECT::_GET_OBJECT_TEXTURE_VARIATION(iLocal_955[1]) != func_300(Local_701.f_7))
      {
        OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iLocal_955[1], func_300(Local_701.f_7));
      }
    }
  }
  else
  {
    iLocal_955[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1420.153f, -3010.176f, -79.4f, 2f, joaat("ba_prop_battle_control_seat"), false, false, false);
  }
}