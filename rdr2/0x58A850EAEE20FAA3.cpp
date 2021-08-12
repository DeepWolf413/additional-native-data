// beat_moonshine_camp.ysc @ L7362
void func_170()
{
  vector3 vVar0;
  float fVar3;

  if (ENTITY::DOES_ENTITY_EXIST(Local_384[2 /*12*/].f_8))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_384[2 /*12*/].f_8, true, false) };
    fVar3 = ENTITY::GET_ENTITY_HEADING(Local_384[2 /*12*/].f_8);
    if (func_340(&vVar0, 2f))
    {
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_384[2 /*12*/].f_8, vVar0, fVar3, true, false, true);
      OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_384[2 /*12*/].f_8, 0);
    }
  }
}