// agency_heist3a.ysc @ L137193
void func_1088()
{
  switch (iLocal_4885)
  {
    case 0:
      if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_627.f_3, 1f, Local_627.f_2, false))
      {
        ENTITY::CREATE_MODEL_HIDE(Local_627.f_3, 1f, Local_627.f_2, false);
        Local_627 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_627.f_2, Local_627.f_3, true, true, false);
        ENTITY::SET_ENTITY_ROTATION(Local_627, Local_627.f_12, 2, true);
        iLocal_4885++;
      }
      break;
    
    case 1:
      break;
  }
}